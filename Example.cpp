FTimerHandle Handle;
GetWorld()->GetTimerManager().SetTimer(Handle, FTimerDelegate::CreateLambda([] { /* callback */ }), 5.0f, false);

//OR

FTimerDelegate TimerCallback;
TimerCallback.BindLambda([]
{
// callback;
});

FTimerHandle Handle;
GetWorld()->GetTimerManager().SetTimer(Handle, TimerCallback, 5.0f, false);
