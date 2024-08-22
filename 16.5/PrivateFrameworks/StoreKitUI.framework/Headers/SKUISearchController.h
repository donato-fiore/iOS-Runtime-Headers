// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISEARCHCONTROLLER_H
#define SKUISEARCHCONTROLLER_H

@class UISearchController, UILabel, NSMutableString;
@protocol SKUISearchControllerDelegate;


#import "SKUISearchBar.h"

@interface SKUISearchController : UISearchController {
    UILabel *_suffixLabel;
    NSMutableString *_paddingString;
    SKUISearchBar *_searchBar;
}


@property (weak, nonatomic) NSObject<SKUISearchControllerDelegate> *delegate;
@property (readonly, nonatomic) SKUISearchBar *searchBar;


-(void)_setSuffix:(id)arg0 ;
-(void)setActive:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif