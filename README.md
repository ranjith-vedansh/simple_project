# simple_project

This repository demonstrates the complete process of how source code moves from a developer’s local environment (server/laptop) to a Source Code Management (SCM) tool, and how it is periodically released to production.

## Branching Strategy

### Primary Branches

| Branch     | Environment / Purpose                                                                 |
| ---------- | ----------------------------------------------------------------------------------- |
| **production** | End user environment (LIVE) — final code deployed to end users                    |
| **main**       | Pre-production / Disaster Recovery (DR) environment — acts as a backup for production |
| **stagging**   | CAT / UAT environment — showcases development features to the customer / app owner |
| **develop**    | Testing / QA environment — first deployment for QA validation of functionality and performance |

### Supporting Branches

| Branch   | Purpose                                      |
| -------- | -------------------------------------------- |
| **feature** | New feature development                    |
| **bugfix**  | Fixing reported bugs                        |
| **issue**   | Tracking issues or tasks                    |
| **hotfix**  | Quick fixes for production-critical issues |

## Build Tools for Different Technologies / Source Code

| Build Tool | Technology / Language | Executable / Output                                      | Compiler Used                                         |
| ---------- | --------------------- | -------------------------------------------------------- | ----------------------------------------------------- |
| **make**   | C & C++               | target.exe (or other binary on Unix/Linux, e.g., a.out)  | **gcc / g++**                                         |
| **Ant**    | Java                  | .class files, .jar archives                              | **javac (Java Compiler)**                             |
| **Maven**  | Java                  | .jar, .war, .ear archives                                | **javac (Java Compiler)**                             |
| **Gradle** | Java, Kotlin, Android | .jar, .war, .apk (for Android), or other build artifacts | **javac (Java), kotlinc (Kotlin), Android SDK tools** |

