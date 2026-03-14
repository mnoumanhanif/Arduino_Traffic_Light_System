# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/).

## [1.1.0] - 2025-01-01

### Changed
- Refactored code with descriptive variable and function names.
- Used `const` for pin assignments and timing constants.
- Removed duplicate `l4()` function (identical to `l2()`); replaced with reusable `showYellow()`.
- Reorganized project structure into `src/`, `docs/`, and `assets/` directories.

### Added
- `.gitignore` for Arduino and IDE artifacts.
- `LICENSE` (MIT).
- `CONTRIBUTING.md` with contribution guidelines.
- `CHANGELOG.md` to track project changes.
- `docs/setup.md` with hardware and software setup instructions.
- `docs/architecture.md` with system design documentation.
- GitHub Actions CI workflow for Arduino compilation checks.
- GitHub issue templates and pull request template.

## [1.0.0] - 2024-01-01

### Added
- Initial traffic light system with Red, Yellow, and Green LEDs.
- Basic traffic light cycle: Red → Yellow → Green → Yellow → repeat.
- Circuit diagram (`circuit_diagram.png`).
- README with project description and component list.
