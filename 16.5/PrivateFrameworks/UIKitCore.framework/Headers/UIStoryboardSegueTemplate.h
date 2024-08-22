// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTORYBOARDSEGUETEMPLATE_H
#define UISTORYBOARDSEGUETEMPLATE_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UIViewController.h"

@interface UIStoryboardSegueTemplate : NSObject <NSCoding>

 {
    NSString *_segueClassName;
    NSString *_destinationViewControllerIdentifier;
    SEL _prepareForChildViewControllerSelector;
}


@property (nonatomic) BOOL animates; // ivar: _animates
@property (retain, nonatomic) NSString *customPrepareForChildViewControllerSelectorName;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL performOnViewLoad; // ivar: _performOnViewLoad
@property (readonly, nonatomic) SEL prepareForChildViewControllerSelector;
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)_perform:(id)arg0 ;
-(id)_performWithDestinationViewController:(id)arg0 sender:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(id)newDefaultPrepareHandlerForSegue:(SEL)arg0 ;
-(id)perform:(id)arg0 ;
-(id)segueWithDestinationViewController:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif