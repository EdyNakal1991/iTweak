//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCBaseNetworkingError : MMObject

+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2 isNetworkError:(_Bool)arg3;
+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2;
@property(nonatomic) _Bool isNetworkError;
@property(nonatomic) int m_uiMessage;
@property(nonatomic) int errorCode;
@property(copy, nonatomic) NSString *errorDesc;
- (id)init;

@end

