//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface WXCPbCSVoiceRoomHelloReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int callData; // @dynamic callData;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) int memberId; // @dynamic memberId;
@property(retain, nonatomic) NSData *memoryCost; // @dynamic memoryCost;
@property(retain, nonatomic) NSMutableArray *relayReport; // @dynamic relayReport;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;

@end

