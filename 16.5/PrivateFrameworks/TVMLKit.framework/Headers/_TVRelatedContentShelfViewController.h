// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVRELATEDCONTENTSHELFVIEWCONTROLLER_H
#define _TVRELATEDCONTENTSHELFVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol __TVShelfViewControllerDelegate, TVAppTemplateImpressionable;


#import "_TVShelfViewController.h"

@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _TVShelfViewController *shelfViewController; // ivar: _shelfViewController
@property (readonly) Class superclass;


-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(void)loadView;
-(void)shelfViewController:(id)arg0 updateRelatedView:(id)arg1 ;


@end


#endif