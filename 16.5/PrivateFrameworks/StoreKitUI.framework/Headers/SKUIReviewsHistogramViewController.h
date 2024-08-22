// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREVIEWSHISTOGRAMVIEWCONTROLLER_H
#define SKUIREVIEWSHISTOGRAMVIEWCONTROLLER_H

@class UIViewController, UIControl, NSArray, NSString;


#import "SKUIReviewsHistogramView.h"
#import "SKUIClientContext.h"
#import "SKUIReviewList.h"

@interface SKUIReviewsHistogramViewController : UIViewController {
    SKUIReviewsHistogramView *_histogramView;
}


@property (readonly, nonatomic) UIControl *appSupportButton;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (nonatomic) NSInteger personalStarRating;
@property (retain, nonatomic) SKUIReviewList *reviewList; // ivar: _reviewList
@property (readonly, nonatomic) UIControl *segmentedControl;
@property (copy, nonatomic) NSArray *segmentedControlTitles;
@property (nonatomic) NSInteger selectedSegmentIndex;
@property (readonly, nonatomic) UIControl *starRatingControl;
@property (copy, nonatomic) NSString *versionString;
@property (readonly, nonatomic) UIControl *writeAReviewButton;


-(id)_histogramView;
-(void)_reloadHistogram;
-(void)loadView;


@end


#endif