const prompt = require("prompt-sync")();

let tasks = [];

function addTask() {
    const task = prompt("Enter a task to add: ");
    if (task.trim() === "") {
        console.log("Task cannot be empty.");
        return;
    }
    tasks.push(task);
    console.log(`Added: "${task}"`);
}

function removeTask() {
    if (tasks.length === 0) {
        console.log("No tasks to remove.");
        return;
    }

    displayTasks();
    const index = parseInt(prompt("Enter the index of the task to remove: "));

    if (isNaN(index) || index < 1 || index > tasks.length) {
        console.log("Invalid index.");
        return;
    }

    const removed = tasks.splice(index - 1, 1);
    console.log(`Removed: "${removed[0]}"`);
}

function displayTasks() {
    if (tasks.length === 0) {
        console.log("No tasks in your list.");
        return;
    }

    console.log("\nYour Tasks:");
    tasks.forEach((task, i) => {
        console.log(`${i + 1}. ${task}`);
    });
    console.log();
}

function clearTasks() {
    tasks = [];
    console.log("All tasks cleared.");
}

function main() {
    console.log("=== To-Do List Manager ===");

    while (true) {
        const command = prompt("\nEnter a command (add, remove, view, clear, exit): ").toLowerCase();

        switch (command) {
            case "add":
                addTask();
                break;
            case "remove":
                removeTask();
                break;
            case "view":
                displayTasks();
                break;
            case "clear":
                clearTasks();
                break;
            case "exit":
                console.log("Goodbye.");
                return;
            default:
                console.log("Invalid command. Try again.");
        }
    }
}

main();
