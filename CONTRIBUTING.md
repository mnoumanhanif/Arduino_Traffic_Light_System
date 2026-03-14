# Contributing to Arduino Traffic Light System

Thank you for your interest in contributing! This guide will help you get started.

## How to Contribute

### Reporting Bugs

1. Check the [existing issues](https://github.com/mnoumanhanif/Arduino_Traffic_Light_System/issues) to avoid duplicates.
2. Open a new issue using the **Bug Report** template.
3. Include a clear description, steps to reproduce, and expected behavior.

### Suggesting Features

1. Open a new issue using the **Feature Request** template.
2. Describe the feature and why it would be useful.

### Submitting Code Changes

1. **Fork** the repository.
2. **Create a branch** from `main`:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. **Make your changes** following the coding guidelines below.
4. **Test your changes** by uploading the sketch to an Arduino board.
5. **Commit** with a clear message:
   ```bash
   git commit -m "Add: description of your change"
   ```
6. **Push** your branch and open a **Pull Request**.

## Coding Guidelines

- Use descriptive variable and function names (e.g., `RED_LED_PIN` instead of `LED_1`).
- Use `const` for pin assignments and timing values that do not change.
- Add comments to explain non-obvious logic.
- Keep functions small and focused on a single task.
- Follow the existing code style and formatting.

## Development Setup

See [docs/setup.md](docs/setup.md) for detailed setup instructions.

## Questions?

Open an issue with the label **question** if you need help.
