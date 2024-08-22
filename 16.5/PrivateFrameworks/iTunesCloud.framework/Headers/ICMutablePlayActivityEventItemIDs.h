// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUTABLEPLAYACTIVITYEVENTITEMIDS_H
#define ICMUTABLEPLAYACTIVITYEVENTITEMIDS_H

@class NSString;


#import "ICPlayActivityEventItemIDs.h"

@interface ICMutablePlayActivityEventItemIDs : ICPlayActivityEventItemIDs

@property (nonatomic) NSUInteger cloudID;
@property (nonatomic) NSInteger equivalencySourceAdamID;
@property (copy, nonatomic) NSString *lyricsID;
@property (nonatomic) NSInteger purchasedAdamID;
@property (nonatomic) NSInteger radioAdamID;
@property (nonatomic) NSInteger reportingAdamID;
@property (nonatomic) NSInteger subscriptionAdamID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif