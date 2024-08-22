// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONSECTIONMUTEASSERTION_H
#define NCNOTIFICATIONSECTIONMUTEASSERTION_H

@class NSString;
@protocol NCNotificationMuteAssertion;

#import <Foundation/Foundation.h>


@interface NCNotificationSectionMuteAssertion : NSObject <NCNotificationMuteAssertion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sectionMuteAssertion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)activeMuteAssertionLevelForThreadIdentifier:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif