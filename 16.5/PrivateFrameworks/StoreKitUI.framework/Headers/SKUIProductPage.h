// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTPAGE_H
#define SKUIPRODUCTPAGE_H

@class NSData, NSHTTPURLResponse, SSMetricsConfiguration, NSString, NSURL, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKUIProductPageItem.h"
#import "SKUIProductPageProductInfo.h"
#import "SKUIReviewConfiguration.h"
#import "SKUIUber.h"

@interface SKUIProductPage : NSObject <NSCopying>



@property (retain, nonatomic) NSData *ITMLData; // ivar: _itmlData
@property (retain, nonatomic) NSHTTPURLResponse *ITMLResponse; // ivar: _itmlResponse
@property (nonatomic) NSInteger defaultPageFragment; // ivar: _defaultPageFragment
@property (retain, nonatomic) SKUIProductPageItem *item; // ivar: _item
@property (retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // ivar: _metricsConfiguration
@property (copy, nonatomic) NSString *metricsPageDescription; // ivar: _metricsPageDescription
@property (copy, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (retain, nonatomic) SKUIProductPageProductInfo *productInformation; // ivar: _productInformation
@property (copy, nonatomic) NSArray *relatedContentSwooshes; // ivar: _relatedContentSwooshes
@property (retain, nonatomic) SKUIReviewConfiguration *reviewConfiguration; // ivar: _reviewConfiguration
@property (retain, nonatomic) SKUIUber *uber; // ivar: _uber


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif