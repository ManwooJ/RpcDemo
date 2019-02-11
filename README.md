# RpcDemo
This is an RPC service sample.

##### How to test the sample
> 1. Build the solution.
> 2. Open a command prompt and run 'CppWindowsService.exe -install'.
> 3. Open Services.msc, find 'CppWindowsService Sample Service' in the list, and start the service.
> 4. Open an another command prompt and then run 'RpcClient.exe. If the communication is okay, you will get the following message:
>    Callback1_Proc - CallbackProc_1()
>    Returned = 7f7f6363
> 5. After your test is done, open Services.msc, stop the 'CppWindowsService Sample Service', and run 'CppWindowsService.exe -remove'

##### Note
This demo is based on the following service sample:  
**The Complete Service Sample**  
https://docs.microsoft.com/en-us/windows/desktop/Services/the-complete-service-sample
