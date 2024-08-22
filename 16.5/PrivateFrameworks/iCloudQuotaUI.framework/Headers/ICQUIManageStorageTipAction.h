// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUIMANAGESTORAGETIPACTION_H
#define ICQUIMANAGESTORAGETIPACTION_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface ICQUIManageStorageTipAction : NSObject

@property (readonly, copy, nonatomic) NSString *actionButtonText; // ivar: _actionButtonText
@property (readonly, copy, nonatomic) NSString *actionName; // ivar: _actionName
@property (readonly, nonatomic) NSURL *actionURL; // ivar: _actionURL


-(id)description;
-(id)initFromRUITableViewRow:(id)arg0 ;


@end


#endif