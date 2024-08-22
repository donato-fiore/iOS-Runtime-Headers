// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTRIGGERDISPLAYINFO_H
#define WFTRIGGERDISPLAYINFO_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WFTriggerDisplayInfo : NSObject

@property (readonly, nonatomic) NSArray *actionIcons; // ivar: _actionIcons
@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) Class triggerClass; // ivar: _triggerClass


-(id)initWithLocalizedTitle:(id)arg0 localizedDescription:(id)arg1 actionIcons:(id)arg2 triggerClass:(Class)arg3 ;


@end


#endif