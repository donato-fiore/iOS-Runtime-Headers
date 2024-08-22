// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIMONOLITHICELEMENTVIEWCONTROLLER_H
#define SAUIMONOLITHICELEMENTVIEWCONTROLLER_H

@protocol SAUIMonolithicElementViewProviding;


#import "SAUILayoutSpecifyingElementViewController.h"

@interface SAUIMonolithicElementViewController : SAUILayoutSpecifyingElementViewController

@property (readonly, nonatomic) NSObject<SAUIMonolithicElementViewProviding> *elementViewProvider;


-(id)initWithMonolithicElementViewProvider:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif