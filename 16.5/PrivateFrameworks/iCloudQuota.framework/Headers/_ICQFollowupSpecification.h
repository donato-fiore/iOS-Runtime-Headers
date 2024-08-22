// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICQFOLLOWUPSPECIFICATION_H
#define _ICQFOLLOWUPSPECIFICATION_H

@class NSDictionary, NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "ICQLink.h"

@interface _ICQFollowupSpecification : NSObject {
    NSDictionary *_serverDict;
}


@property (copy, nonatomic) NSString *altMessage; // ivar: _altMessage
@property (copy, nonatomic) NSString *altNoteMessage; // ivar: _altNoteMessage
@property (nonatomic) BOOL badgeApp; // ivar: _badgeApp
@property (readonly, nonatomic) NSURL *dynamicUIRouteURL;
@property (nonatomic) NSInteger followupDisplayStyle; // ivar: _followupDisplayStyle
@property (nonatomic, getter=isForAccountGroup) BOOL forAccountGroup; // ivar: _forAccountGroup
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (retain, nonatomic) NSArray *links; // ivar: _links
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) ICQLink *noteActivateLink; // ivar: _noteActivateLink
@property (retain, nonatomic) ICQLink *noteClearLink; // ivar: _noteClearLink
@property (copy, nonatomic) NSString *noteMessage; // ivar: _noteMessage
@property (copy, nonatomic) NSString *noteSubTitle; // ivar: _noteSubTitle
@property (copy, nonatomic) NSString *noteTitle; // ivar: _noteTitle
@property (copy, nonatomic) NSString *notifyingAppId; // ivar: _notifyingAppId
@property (copy, nonatomic) NSString *offerId; // ivar: _offerId
@property (nonatomic) BOOL premiumOffer; // ivar: _premiumOffer
@property (readonly, nonatomic) NSString *purchaseAttribution;
@property (retain, nonatomic) NSDictionary *serverDict;
@property (readonly, nonatomic) NSURL *serverUIURL;
@property (copy, nonatomic) NSString *sfSymbolBundlePath; // ivar: _sfSymbolBundlePath
@property (copy, nonatomic) NSString *sfSymbolID; // ivar: _sfSymbolID
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic, getter=isZeroAction) BOOL zeroAction; // ivar: _zeroAction


+(id)sharedFollowUpController;
+(void)clearFollowupWithController:(id)arg0 isPremium:(BOOL)arg1 completion:(id)arg2 ;
+(void)clearLegacyFollowupWithController:(id)arg0 ;
+(void)clearNotificationWithController:(id)arg0 isPremium:(BOOL)arg1 completion:(id)arg2 ;
-(NSInteger)primaryAction;
-(id)_buildFollowupItem;
-(id)followupActionForLink:(id)arg0 ;
-(id)followupActionForLink:(id)arg0 needsFlow:(BOOL)arg1 ;
-(id)identifierPrefix;
-(id)init;
-(id)initWithServerDictionary:(id)arg0 ;
-(void)_postFollowupWithController:(id)arg0 completion:(id)arg1 ;
-(void)addNotifyingAppIdForItem:(id)arg0 ;
-(void)postFollowupWithController:(id)arg0 ;
-(void)postFollowupWithController:(id)arg0 replaceExisting:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif