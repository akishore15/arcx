const { VM } = require('vm2');
const fs = require('fs');

// Read the JavaScript file
const code = fs.readFileSync('script.js', 'utf8');

// Create a new VM instance
const vm = new VM();

try {
  // Run the code in the VM
  vm.run(code);
} catch (error) {
  console.error(`Error executing code: ${error}`);
}
