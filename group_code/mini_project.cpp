#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <fstream>
#include <filesystem>
using namespace std;



bool use_again_na(){

    char use_mai;
    
    cout << "Do you want to run program again? (Y/n): ";
    cin >> use_mai;

    if (use_mai == 'y' || use_mai == 'Y'){
        return true;
    } else if (use_mai == 'n' || use_mai == 'N'){
        return false;
    } else {
        cout << "Invalid input. Please enter 'Y' or 'N'.\n";
        return use_again_na(); // เรียกตัวเองใหม่เพื่อให้ผู้ใช้ใส่ข้อมูลใหม่
    }
}


void calculateRetirementSavings() {
    int currentAge, retirementAge, lifespanAge;
    double monthlyExpense, totalSavingsNeeded, monthlySavings;
    ofstream save_file;
    string save_file_name , full_path , floder_path = "./save/";

    cout << "Enter file name to save : " ;
    cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
    getline(cin, save_file_name);
    cout << endl;
    
    full_path = floder_path + save_file_name;

    // Create the folder if it doesn't exist
    if (!filesystem::exists(floder_path)) {
        filesystem::create_directory(floder_path);  // Create the folder
        cout << "Directory created: " << floder_path << endl;
    }

    cout << "-------------------------------" << endl;
    cout << "financial planning for retirement" << endl; //โปรแกรมคำนวณการออมเพื่อการเกษียณ
    cout << "-------------------------------" << endl;
    // รับข้อมูลจากผู้ใช้
    cout << "Please enter your current age: ";  //อายุปัจจุบัน
    cin >> currentAge;

    cout << "Please enter your desired retirement age: "; //อายุที่จะเกษียน
    cin >> retirementAge;

    cout << "Please enter your expected lifespan: "; //คาดเดาอายุไข
    cin >> lifespanAge;

    cout << "Please enter your estimated monthly expenses after retirement (Baht): "; //เงินที่อยากจะใช้หลังเกษียณ ต่อเดือน
    cin >> monthlyExpense;

    // ตรวจสอบความถูกต้องของข้อมูล
    if (retirementAge <= currentAge) {
        cout << "Retirement age must be greater than current age.\n";  //อายุเกษียณจะต้องมากกว่าอายุปัจจุบัน
        return;
    }
    if (lifespanAge <= retirementAge) {
        cout << "Lifespan must be greater than retirement age.\n"; //อายุขัยต้องมากกว่าอายุเกษียณ
        return;
    }
    if (monthlyExpense <= 0) {
        cout << "Monthly expenses must be greater than 0.\n";  //รายจ่ายรายเดือนต้องมากกว่า 0.
        return;
    }

    // คำนวณ
    int yearsToRetirement = retirementAge - currentAge;
    int monthsToRetirement = yearsToRetirement * 12;
    int yearsAfterRetirement = lifespanAge - retirementAge;
    int monthsAfterRetirement = yearsAfterRetirement * 12;

    totalSavingsNeeded = monthlyExpense * monthsAfterRetirement;
    monthlySavings = totalSavingsNeeded / monthsToRetirement;

    // แสดงผลลัพธ์ในรูปแบบตาราง
    cout << "\nRetirement Savings Plan\n";
    cout << "---------------------------------------------------------\n";
    cout << setw(30) << left << "Years until retirement:" << setw(15) << right << yearsToRetirement << endl;  //จำนวนปีจนถึงเกษียณ:
    cout << setw(30) << left << "Years after retirement:" << setw(15) << right << yearsAfterRetirement << endl;  //จำนวนปีหลังเกษียณอายุ:
    cout << setw(30) << left << "Total savings needed:" << setw(15) << right << fixed << setprecision(2) << totalSavingsNeeded << " Baht" << endl; //รวมเงินออมที่ต้องออม:
    cout << setw(30) << left << "Monthly savings required:" << setw(15) << right << monthlySavings << " Baht" << endl; //เงินออมที่ต้องออมต่อเดือน:
    cout << "---------------------------------------------------------\n";

    save_file.open(full_path.c_str());
        save_file << "-------------------------------" << endl;
        save_file << "financial planning for retirement" << endl;
        save_file << "-------------------------------" << endl;
        save_file << "\nRetirement Savings Plan\n";
        save_file << "---------------------------------------------------------\n";
        save_file << setw(30) << left << "Years until retirement:" << setw(15) << right << yearsToRetirement << endl;  //จำนวนปีจนถึงเกษียณ:
        save_file << setw(30) << left << "Years after retirement:" << setw(15) << right << yearsAfterRetirement << endl;  //จำนวนปีหลังเกษียณอายุ:
        save_file << setw(30) << left << "Total savings needed:" << setw(15) << right << fixed << setprecision(2) << totalSavingsNeeded << " Baht" << endl; //รวมเงินออมที่ต้องออม:
        save_file << setw(30) << left << "Monthly savings required:" << setw(15) << right << monthlySavings << " Baht" << endl; //เงินออมที่ต้องออมต่อเดือน:
        save_file << "---------------------------------------------------------\n";
    save_file.close();

}


void calculateSavingsPlan() {
    string savingsGoal;
    double currentSavings, targetSavings, yearsToSave;
    ofstream save_file;
    string save_file_name , full_path , floder_path = "./save/";

    cout << "Enter file name to save : " ;
    cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
    getline(cin, save_file_name);
    cout << endl;
    
    full_path = floder_path + save_file_name;

    // Create the folder if it doesn't exist
    if (!filesystem::exists(floder_path)) {
        filesystem::create_directory(floder_path);  // Create the folder
        cout << "Directory created: " << floder_path << endl;
    }

    cout << "----------------------------------" << endl;
    cout << "Goal savings planning" << endl;
    cout << "----------------------------------" << endl;
    // รับข้อมูลจากผู้ใช้
    cout << "Enter your savings goal (e.g., buying a car, buying a house): ";
    cin >> savingsGoal;

    // ตรวจสอบและรับค่าเงินออมปัจจุบัน
    do {
        cout << "Enter your current savings (Baht): ";
        cin >> currentSavings;
        if (!cin) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (currentSavings < 0);

    // ตรวจสอบและรับค่าเงินออมเป้าหมาย
    do {
        cout << "Enter your target savings (Baht): ";
        cin >> targetSavings;
        if (!cin || targetSavings <= currentSavings) {
            cout << "Invalid input. Target savings must be greater than current savings.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (targetSavings <= currentSavings);

    // ตรวจสอบและรับจำนวนปี
    do {
        cout << "Enter the number of years you plan to save: ";
        cin >> yearsToSave;
        if (!cin || yearsToSave <= 0) {
            cout << "Invalid input. Please enter a positive number for years.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (yearsToSave <= 0);

    // คำนวณ
    double amountToSave = targetSavings - currentSavings;
    double yearlySaving = amountToSave / yearsToSave;
    double monthlySaving = yearlySaving / 12;

    // แสดงผลลัพธ์ในรูปแบบตาราง
    cout << "\nSavings Plan Summary\n";
    cout << "---------------------------------------------------------\n";
    cout << setw(25) << left << "Savings Goal:" << setw(15) << right << savingsGoal << endl;
    cout << setw(25) << left << "Total Amount to Save:" << setw(15) << right << fixed << setprecision(2) << amountToSave << " Baht" << endl;
    cout << setw(25) << left << "Yearly Savings Required:" << setw(15) << right << yearlySaving << " Baht" << endl;
    cout << setw(25) << left << "Monthly Savings Required:" << setw(15) << right << monthlySaving << " Baht" << endl;
    cout << "---------------------------------------------------------\n";
    
    save_file.open(full_path.c_str());
        save_file << "----------------------------------" << endl;
        save_file << "Goal savings planning" << endl;
        save_file << "----------------------------------" << endl;
        save_file << "\nSavings Plan Summary\n";
        save_file << "---------------------------------------------------------\n";
        save_file << setw(25) << left << "Savings Goal:" << setw(15) << right << savingsGoal << endl;
        save_file << setw(25) << left << "Total Amount to Save:" << setw(15) << right << fixed << setprecision(2) << amountToSave << " Baht" << endl;
        save_file << setw(25) << left << "Yearly Savings Required:" << setw(15) << right << yearlySaving << " Baht" << endl;
        save_file << setw(25) << left << "Monthly Savings Required:" << setw(15) << right << monthlySaving << " Baht" << endl;
        save_file << "---------------------------------------------------------\n";
    save_file.close();
}

//สร้าง struct เพื่อเก็บค่าต่าง หลายค่า (5.โปรแกรมการจัดการหนี้ ดอกเบี้ยแบบคงที่)
struct FixedInterastResult {
    double Monthly_principal;
    double total;
    double Must_pay_per_month; }; // ; = off the box code

// function (โปรแกรมการจัดการหนี้ ดอกเบี้ยแบบคงที่)
FixedInterastResult fixed_interest(int principle, double interest_year, int Months) {
    double total, Must_pay_per_month, Monthly_interest, Monthly_principal; 
    
    total = principle * interest_year *(Months / 12); //ดอกเบี้ยรวม
    Must_pay_per_month = (principle + total) / Months; //ต้องชำระต่อเดือน
    Monthly_interest = total / Months; //ยอดชำระดอกเบี้ยต่อเดือน
    Monthly_principal = Must_pay_per_month - Monthly_interest; //ยอดชำระเงินต้นต่อเดือน
    int remaining_principal = principle - Monthly_principal; //เงินต้นคงเหลือ
    
    //return by {}(box code)
    return {Monthly_principal, total, Must_pay_per_month};
}

int user_selection(){
    
    int choice;
    cout << "--------------------------------" << endl;
    cout << "             MENU               " << endl;
    cout << "--------------------------------" << endl;
    cout << "1: financial planning for retirement " << endl; //โปรแกรมคำนวณการออมเพื่อการเกษียณ
    cout << "2: Home and car payment planning " << endl; //โปรแกรมวางแผนการผ่อนบ้าน และ ผ่อนรถ
    cout << "3: Dollar-Cost Averaging (DCA) investment calculator  " << endl; //โปรแกรมคำนวณการลงทุนเฉลี่ยทุกๆเดือน (DCA)
    cout << "4: Goal savings planning " << endl; //โปรแกรมวางแผนการออมเพื่อบรรลุเป้าหมาย
    cout << "5: interest debt management " << endl; //Fixed interest debt management
    cout << "6: Survival ratio calculation " << endl;//โปรแกรมคำนวณอัตราส่วนแสดงความอยู่รอด
    cout << "7: Liquidity ratio calculation " << endl; //โปรแกรมคำนวณอัตราส่วนสภาพคล่อง
    cout << "8: Basic liquidity ratio calculation " << endl; //โปรแกรมคำนวณอัตราส่วนสภาพคล่องพื้นฐาน
    cout << "9: Tax calculation " << endl; //โปรแกรมคำนวณการเสียภาษี
    cout << "Enter choice number: " ;
    cin >> choice ;

    return choice;
}

void homencarplanning(){
        double limit_Money; // วงเงินกู้ ยืมเงินต้นมากจากธนาคารเท่าไหร่
        double interest; // อัตราดอกเบี้ยต่อปี
        int years; // ระยะเวลาผ่อน (ปี)
        
        ofstream save_file;
        string save_file_name , full_path , floder_path = "./save/";

        cout << "Enter file name to save : " ;
        cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
        getline(cin, save_file_name);
        cout << endl;
    
        full_path = floder_path + save_file_name;

        // Create the folder if it doesn't exist
        if (!filesystem::exists(floder_path)) {
            filesystem::create_directory(floder_path);  // Create the folder
            cout << "Directory created: " << floder_path << endl;
        }

        cout << "-------------------------------" << endl;
        cout << "Home and car payment planning " << endl; //โปรแกรมวางแผนการผ่อนบ้าน และ ผ่อนรถ
        cout << "-------------------------------" << endl;


        cout << "Please enter the loan amount : ";
        cin >> limit_Money;

        cout << "Please enter the annual interest rate : ";
        cin >> interest;

        cout << "Please enter the repayment period (years) : ";
        cin >> years;
        
        // function car and house (2.โปรแกรมวางแผนการผ่อนบ้าน และ ผ่อนรถ)

        // แปลงอัตราดอกเบี้ยต่อปีเป็นอัตราดอกเบี้ยรายเดือน
        double monthly_Interest = interest / 100 / 12;
        //  คำนวณจำนวนงวดทั้งหมด (เดือน)
        int number_Payments = years * 2;
        // คำนวณค่างวดรายเดือนตามสูตร
        double monthly_Payment = (limit_Money * monthly_Interest * pow(1 + monthly_Interest, number_Payments)) / (pow(1 + monthly_Interest, number_Payments) - 1);
    

        cout << "Monthly installment amount : " << monthly_Payment << " Bath" << endl;
        cout << "End Program" << " Thank you"<< endl;

        save_file.open(full_path.c_str());
            save_file << "-------------------------------" << endl;
            save_file << "Home and car payment planning " << endl; //โปรแกรมวางแผนการผ่อนบ้าน และ ผ่อนรถ
            save_file << "-------------------------------" << endl;
            save_file << "Monthly installment amount : " << monthly_Payment << " Bath" << endl;
            save_file << "End Program" << " Thank you"<< endl;
        save_file.close();
}

void DollarCost(){
    ofstream save_file;
    string save_file_name , full_path , floder_path = "./save/";

    cout << "Enter file name to save : " ;
    cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
    getline(cin, save_file_name);
    cout << endl;
    
    full_path = floder_path + save_file_name;

    // Create the folder if it doesn't exist
    if (!filesystem::exists(floder_path)) {
        filesystem::create_directory(floder_path);  // Create the folder
        cout << "Directory created: " << floder_path << endl;
    }

        cout << "-------------------------------" << endl;
        cout << "Dollar-Cost Averaging (DCA) investment calculator" << endl; //โปรแกรมคำนวณการออมเพื่อการเกษียณ
        cout << "-------------------------------" << endl;
        double initialPrincipal, monthlySavings, annualInterestRate;
        int years;
        cout << "===========================================\n";
        cout << "Enter initial principal amount: ";
        cin >> initialPrincipal;
        cout << "Enter monthly saving amount: ";
        cin >> monthlySavings;
        cout << "Enter annual interest rate (%): ";
        cin >> annualInterestRate;
        cout << "Enter number of years: ";
        cin >> years;

        double monthlyInterestRate = annualInterestRate / 100 / 12;

        cout << fixed << setprecision(2);
        cout << "===========================================\n";
        cout << "Year\t\tFuture Value\n";
        cout << "-------------------------------------------\n";

        double futureValue = initialPrincipal;
        for (int year = 1; year <= years; ++year) {
            for (int month = 1; month <= 12; ++month) {
                futureValue = futureValue * (1 + monthlyInterestRate) + monthlySavings;
            }
            cout << year << "\t\t" << futureValue << endl;
        }
        cout << "-------------------------------------------";
        cout << "\nFinal value after " << years << " years: " << futureValue << endl;
        cout << "===========================================\n";

        save_file.open(full_path.c_str());
            save_file << "-------------------------------" << endl;
            save_file << "Dollar-Cost Averaging (DCA) investment calculator" << endl; //โปรแกรมคำนวณการออมเพื่อการเกษียณ
            save_file << "-------------------------------" << endl;
            save_file << fixed << setprecision(2);
            save_file << "===========================================\n";
            save_file << "Year\t\tFuture Value\n";
            save_file << "-------------------------------------------\n";

            futureValue = initialPrincipal;
            for (int year = 1; year <= years; ++year) {
                for (int month = 1; month <= 12; ++month) {
                    futureValue = futureValue * (1 + monthlyInterestRate) + monthlySavings;
                }
                save_file << year << "\t\t" << futureValue << endl;
            }
            save_file << "-------------------------------------------";
            save_file << "\nFinal value after " << years << " years: " << futureValue << endl;
            save_file << "===========================================\n";
        save_file.close();

}

void interest_debt(){
    ofstream save_file;
    string save_file_name , full_path , floder_path = "./save/";

    cout << "Enter file name to save : " ;
    cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
    getline(cin, save_file_name);
    cout << endl;
    
    full_path = floder_path + save_file_name;

    // Create the folder if it doesn't exist
    if (!filesystem::exists(floder_path)) {
        filesystem::create_directory(floder_path);  // Create the folder
        cout << "Directory created: " << floder_path << endl;
    }
    int money; 
        double Interestperyears;
        int months;
        cout << "-------------------------" << endl;
        cout << "interest debt management" << endl;
        cout << "-------------------------" << endl;


        cout << "Please enter the principal amount : ";
        cin >> money;

        cout << "Please enter the annual interest rate : ";
        cin >> Interestperyears;

        cout << "Please enter the number of payment installments (months) : ";
        cin >> months;

        FixedInterastResult result = fixed_interest(money, Interestperyears, months);
        // result คือผลรวมของ 3 ตัวแปร
        cout << "Minimum payment per month : " << result.Monthly_principal << endl;
        cout << "Total interest : "<< result.total << endl;
        cout << "Total payment amount : " << result.Must_pay_per_month << endl;
    
        save_file.open(full_path.c_str());
            save_file << "-------------------------" << endl;
            save_file << "interest debt management" << endl;
            save_file << "-------------------------" << endl;
            save_file << "Minimum payment per month : " << result.Monthly_principal << endl;
            save_file << "Total interest : "<< result.total << endl;
            save_file << "Total payment amount : " << result.Must_pay_per_month << endl;
        save_file.close();
}

void Survival_ratio(){
    ofstream save_file;
    string save_file_name , full_path , floder_path = "./save/";

    cout << "Enter file name to save : " ;
    cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
    getline(cin, save_file_name);
    cout << endl;
    
    full_path = floder_path + save_file_name;

    // Create the folder if it doesn't exist
    if (!filesystem::exists(floder_path)) {
        filesystem::create_directory(floder_path);  // Create the folder
        cout << "Directory created: " << floder_path << endl;
    }
     int monthly_income, Expenses_month, balance;
        cout << endl;
        cout << "-----------------------------------" << endl;
        cout << "Survival ratio calculation" << endl;
        cout << "-----------------------------------" << endl;

        cout << "Please enter your monthly income : ";
        cin >> monthly_income;

        cout << "Please enter your monthly expenses : ";
        cin >> Expenses_month;

        balance = monthly_income / Expenses_month ;

        if(balance > 1) {
            cout << "Reduce new debt and increase savings." << endl;
        } else {
            cout << "You are at risk in terms of your lifestyle, you should carefully consider your spending." << endl;
        }
        cout << "---------------" << endl;
        cout << "Thank you for using our service";

        save_file.open(full_path.c_str());

            save_file << "-----------------------------------" << endl;
            save_file << "Survival ratio calculation" << endl;
            save_file << "-----------------------------------" << endl;
             if(balance > 1) {
            save_file << "Reduce new debt and increase savings." << endl;
            } else {
            save_file << "You are at risk in terms of your lifestyle, you should carefully consider your spending." << endl;
            }
            save_file << "---------------" << endl;
        save_file.close();
}


void liqidity_ratio(){
    ofstream save_file;
    string save_file_name , full_path , floder_path = "./save/";

    cout << "Enter file name to save : " ;
    cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
    getline(cin, save_file_name);
    cout << endl;
    
    full_path = floder_path + save_file_name;

    // Create the folder if it doesn't exist
    if (!filesystem::exists(floder_path)) {
        filesystem::create_directory(floder_path);  // Create the folder
        cout << "Directory created: " << floder_path << endl;
    }


    int flow_balance , dept , total;
        cout << endl;
        cout << "------------------------------" << endl;
        cout << "Liquidity ratio calculation " << endl;
        cout << "------------------------------" << endl;
        cout << "Liquid assets: ";
        cin >> flow_balance;

        cout << "Short term debt: " ;
        cin >> dept;

        total = flow_balance / dept;

        if (total >= 1)
        {
            cout << "Having enough savings to pay off short-term debt.";
        }else if (total < 1)
        {
            cout << "There is a risk in maintaining your lifestyle or becoming delinquent on debt.";
        }else{
            cout << "Something went wrong!";
        }

        save_file.open(full_path.c_str());
        
            save_file << "------------------------------" << endl;
            save_file << "Liquidity ratio calculation " << endl;
            save_file << "------------------------------" << endl;
            if (total >= 1)
            {
                save_file << "Having enough savings to pay off short-term debt.";
            }else if (total < 1)
            {
                save_file << "There is a risk in maintaining your lifestyle or becoming delinquent on debt.";
            }else{
                save_file << "Something went wrong!";
            }
        save_file.close();
}

void basic_liqidity(){
    
    ofstream save_file;
    string save_file_name , full_path , floder_path = "./save/";

    cout << "Enter file name to save : " ;
    cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
    getline(cin, save_file_name);
    cout << endl;
    
    full_path = floder_path + save_file_name;

    // Create the folder if it doesn't exist
    if (!filesystem::exists(floder_path)) {
        filesystem::create_directory(floder_path);  // Create the folder
        cout << "Directory created: " << floder_path << endl;
    }

    float balacne , pay_per_mouth;
        
        cout << "------------------------------" << endl;
        cout << "Basic liquidity ratio calculation " << endl;
        cout << "------------------------------" << endl;

        cout << "Please Enter your balacne : ";
        cin >> balacne;
        
        cout << "Enter You spent per mouth :";
        cin >> pay_per_mouth;

        float result = balacne / pay_per_mouth;

        if (result > 3)
        {
            cout << "You having an emergency fund for unexpected expenses." << endl;
            //แสดง มีเงินสำรองไว้ใช้จ่ายยามฉุกเฉิน ลดโอกาสการรบกวนเงินลงทุน
            //เพื่ออนาคตมาใช้จ่าย หรือการก่อหนี้เพิ่ม
        }
        else if (result < 3)
        {
            cout << "You having too little money increases the chances of disrupting investments or incurring more debt." << endl;
            //แสดง มีเงินน้อยเกินไป มีโอกาสการรบกวนเงินลงทุนหรือการก่อหนี้เพิ่ม
        }
        else{
            cout << "Try again";
        }

    // Open the file for writing
    save_file.open(full_path.c_str());

    // Check if the file was successfully opened
    if (!save_file) {
        cout << "Error: Could not open file for saving!" << endl;
        return;
    }

    // Write to the file
    save_file << "------------------------------" << endl;
    save_file << "Basic liquidity ratio calculation" << endl;
    save_file << "------------------------------" << endl;
    
    save_file << "Balance: " << balacne << endl;
    save_file << "Monthly Spending: " << pay_per_mouth << endl;
    save_file << "Liquidity Ratio: " << result << endl;

    if (result > 3) {
        save_file << "You have an emergency fund for unexpected expenses." << endl;
    } else if (result < 3) {
        save_file << "You have too little money, increasing the chances of disrupting investments or incurring more debt." << endl;
    } else {
        save_file << "Try again." << endl;
    }

    save_file.close();
}


void tax_cal(){
    ofstream save_file;
    string save_file_name , full_path , floder_path = "./save/";

    cout << "Enter file name to save : " ;
    cin.ignore(); //ไม่รู้เหมือนกันคืออะไร แต่ต้องใช้ไม่่งั้นgetline จะ skip
    getline(cin, save_file_name);
    cout << endl;
    
    full_path = floder_path + save_file_name;

    // Create the folder if it doesn't exist
    if (!filesystem::exists(floder_path)) {
        filesystem::create_directory(floder_path);  // Create the folder
        cout << "Directory created: " << floder_path << endl;
    }
    double income_per_m , payment , balance , ip_year , balacne_tax , tax  ;
    double parent = 3 , d_parent;
    bool tax_fund = true;
    cout << endl;
    cout << "----------------------" << endl;
    cout << "Tax calculation" << endl;
    cout << "----------------------" << endl;
    cout << "input income per mouth : ";
    cin >> income_per_m;

    ip_year = income_per_m * 12;
    do
    {
        cout << "Payment per mouth (can't over 100k) : ";
        cin >> payment;
    } while (payment > 100000);

    balance = ip_year - payment ;
    
    while (parent > 2 || parent < 0)
    {
        cout << "How many parent you adopt (0-2) : ";
        cin >> parent;
    }
    
    d_parent = 30000 * parent;

    balacne_tax = (balance - 60000) - d_parent;
    
    if (balacne_tax < 150000)
    {
        tax_fund = false;
        
    }
    else if (balacne_tax > 5000000)
    {
        tax = ((balacne_tax - 5000000) * 0.35) + 1265000;
    }
    else if (balacne_tax > 2000000)
    {
        tax =((balacne_tax - 2000000) *0.30) + 365000;
    }
    else if (balacne_tax > 1000000)
    {
        tax = ((balacne_tax - 1000000) * 0.25) + 115000;
    }
    else if (balacne_tax > 750000){
        tax = ((balacne_tax - 750000) * 0.20) + 65000;
    }
    else if (balacne_tax > 500000){
        tax = ((balacne_tax - 500000) * 0.15) + 27500;
    }
    else if (balacne_tax > 300000){
        tax = ((balacne_tax - 300000) * 0.10) + 7500;
    }
    else if (balacne_tax > 150000){
        tax = ((balacne_tax - 150000) * 0.05);
    }

    
    if (tax_fund)
    {
        cout << fixed << setprecision(2);
        cout << "Net income : " << balance << endl;
        cout << "Income after deductions : " << balacne_tax << endl;
        cout << "tax payable : " << tax << endl;
        //แสดง รายได้สุทธิ, รายได้นำไปคิดภาษี, ภาษี
        save_file.open(full_path.c_str());
            save_file << "----------------------" << endl;
            save_file << "Tax calculation" << endl;
            save_file << "----------------------" << endl;
            save_file << fixed << setprecision(2);
            save_file << "Net income : " << balance << endl;
            save_file << "Income after deductions : " << balacne_tax << endl;
            save_file << "tax payable : " << tax << endl;
            save_file << "----------------------" << endl;
        save_file.close();
    }
    else if (tax_fund == false)
    {
        cout << fixed << setprecision(2);
        cout << "Net income : " << balance << endl;
        cout << "No need to pay taxes."  << endl;
        save_file.open(full_path.c_str());
            save_file << "----------------------" << endl;
            save_file << "Tax calculation" << endl;
            save_file << "----------------------" << endl;
            save_file << fixed << setprecision(2);
            save_file << "Net income : " << balance << endl;
            save_file << "No need to pay taxes."  << endl;
            save_file << "----------------------" << endl;
        save_file.close();
        
    }


    
    

}

int main() {

    do{
    
    int choice = user_selection();
    if(choice == 1) {
        
        calculateRetirementSavings();
    } 
    else if(choice == 2) {
        homencarplanning();
    }
    else if(choice == 3) {
        DollarCost();
    }
    else if(choice == 4) {
        
        calculateSavingsPlan(); 
        
    }
    else if(choice == 5) {
        interest_debt();
    }
    else if(choice == 6) {
       Survival_ratio(); 
    }
    else if(choice == 7) {
        liqidity_ratio();
    }
    else if(choice == 8) {

     basic_liqidity();
    }
    else if(choice == 9) {

        tax_cal();
    
    } else {
        cout << "Error" << endl;
    }
    
    } while (use_again_na() == true);
    return 0;
}
