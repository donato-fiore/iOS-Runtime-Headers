// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYAUTOMATIONACTION_H
#define UIACCESSIBILITYAUTOMATIONACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIAccessibilityAutomationAction : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) SEL selector; // ivar: _selector


-(id)initWithIdentifier:(id)arg0 selector:(SEL)arg1 ;


@end


#endif