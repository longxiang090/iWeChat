//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportWKWebViewTerminateItem : WAReportBaseItem
{
    _Bool _memoryWarning;
    long long _publicLibVersion;
    unsigned long long _runningState;
    long long _stackCount;
    long long _stackIndex;
    unsigned long long _closeAction;
}

@property(nonatomic) _Bool memoryWarning; // @synthesize memoryWarning=_memoryWarning;
@property(nonatomic) unsigned long long closeAction; // @synthesize closeAction=_closeAction;
@property(nonatomic) long long stackIndex; // @synthesize stackIndex=_stackIndex;
@property(nonatomic) long long stackCount; // @synthesize stackCount=_stackCount;
@property(nonatomic) unsigned long long runningState; // @synthesize runningState=_runningState;
@property(nonatomic) long long publicLibVersion; // @synthesize publicLibVersion=_publicLibVersion;
- (id)reportString;

@end
