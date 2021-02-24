const fs = require("fs");

function debugLogs(projectName, version, author) {
    console.log("=========================");
    console.log(`Project name: ${projectName}`);
    console.log(`Project version: ${version}`);
    console.log(`Project author: ${author}`);
    console.log("=========================");
}

function main() { debugLogs("name", "version", "author"); }