// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBUTTONBARLAYOUTMETRICS_H
#define _UIBUTTONBARLAYOUTMETRICS_H

@class NSString, NSLayoutDimension;
@protocol _UIButtonBarLayoutMetricsData, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIButtonBarLayoutMetrics : NSObject <_UIButtonBarLayoutMetricsData, NSCopying>

 {
    BOOL _locked;
}


@property (nonatomic) BOOL allowsViewWrappers; // ivar: _allowsViewWrappers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutDimension *flexibleSpaceGuide; // ivar: _flexibleSpaceGuide
@property (retain, nonatomic) NSLayoutDimension *groupSizeGuide; // ivar: _groupSizeGuide
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutDimension *minimumSpaceGuide; // ivar: _minimumSpaceGuide
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutDimension *verticalSizeGuide; // ivar: _verticalSizeGuide


-(id)_copyWithModifications:(id)arg0 ;
-(id)_upcastIfReadOnly;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif