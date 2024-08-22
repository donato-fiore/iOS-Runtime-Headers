// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUPRIVACYMANAGER_H
#define TUPRIVACYMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TUPrivacyManager : NSObject

@property (readonly, copy, nonatomic) NSArray *privacyRules;


+(id)sharedPrivacyManager;
-(BOOL)isIncomingCommunicationBlockedForBusinessID:(id)arg0 ;
-(BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)arg0 ;
-(BOOL)isIncomingCommunicationBlockedForHandle:(id)arg0 ;
-(BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)arg0 ;
-(id)allBlacklistRules;
-(id)init;
-(void)_handleBlockListChanged:(id)arg0 ;
-(void)addRule:(id)arg0 ;
-(void)dealloc;
-(void)removeRule:(id)arg0 ;
-(void)setBlockIncomingCommunication:(BOOL)arg0 forBusinessID:(id)arg1 ;
-(void)setBlockIncomingCommunication:(BOOL)arg0 forEmailAddress:(id)arg1 ;
-(void)setBlockIncomingCommunication:(BOOL)arg0 forPhoneNumber:(id)arg1 ;


@end


#endif