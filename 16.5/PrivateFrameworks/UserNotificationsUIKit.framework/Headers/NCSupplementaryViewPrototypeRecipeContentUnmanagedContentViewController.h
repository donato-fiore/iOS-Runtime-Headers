// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTUNMANAGEDCONTENTVIEWCONTROLLER_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTUNMANAGEDCONTENTVIEWCONTROLLER_H

@class NSString;
@protocol NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate;


#import "NCSupplementaryViewPrototypeRecipeViewController.h"

@interface NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewController : NCSupplementaryViewPrototypeRecipeViewController <NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)title;
-(id)init;
-(void)loadView;
-(void)unmanagedContentViewControllerView:(id)arg0 setContainsUnmanagedContent:(BOOL)arg1 ;


@end


#endif