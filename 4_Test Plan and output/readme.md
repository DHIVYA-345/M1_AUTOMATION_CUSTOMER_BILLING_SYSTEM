# Test Plan

---

## High Level Test Plan

---

| TestID | Description                                                                                                                                  | Exp I/P | Exp O/P                       | Actual O/P                    | Type of Test      |
| ------ | -------------------------------------------------------------------------------------------------------------------------------------------- | ------- | ----------------------------- | ----------------------------- | ----------------- |
| H_01   | When user enter option which is not listed                                                                                                   | ----    | Give message "Invalid option" | Give message "Invalid option" | Scenario Based    |                                                                                                            | ----    | Show no invoice message       | Show no invoice message       | Boundary based    |


## Low Level Test Plan

---

| TestID | Description                                                                                 | Exp I/P       | Exp O/P                  | Actual O/P               | Type of Test      |
| ------ | ------------------------------------------------------------------------------------------- | ------------- | ------------------------ | ------------------------ | ----------------- |
| L_01   | Calculating Particular Item Bill by taking item quantiy and unit price as input             | 10 , 34       | 340                      | 340                      | Requirement Based |
