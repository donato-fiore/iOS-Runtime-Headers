// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDEBUGGINGINFORMATIONVCHIERARCHYDATACONTAINER_H
#define UIDEBUGGINGINFORMATIONVCHIERARCHYDATACONTAINER_H


#import <Foundation/Foundation.h>

#import "UIViewController.h"

@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject

@property (nonatomic) NSInteger level; // ivar: _level
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 atLevel:(NSInteger)arg1 ;


@end


#endif