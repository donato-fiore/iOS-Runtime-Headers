// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHBARLAYOUTBASE_H
#define _UISEARCHBARLAYOUTBASE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UISearchBarLayoutBase : NSObject <NSCopying>

 {
    BOOL _isLayoutValid;
}


@property (nonatomic) NSInteger barMetrics; // ivar: _barMetrics
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (nonatomic, getter=isHostedByNavigationBar) BOOL hostedByNavigationBar; // ivar: _hostedByNavigationBar
@property (nonatomic, getter=isLayoutRTL) BOOL layoutRTL; // ivar: _layoutRTL
@property (nonatomic) CGSize layoutSize; // ivar: _layoutSize
@property (readonly, nonatomic, getter=isLayoutValid) BOOL layoutValid;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)applyLayout;
-(void)invalidateLayout;
-(void)updateLayout;
-(void)updateLayoutIfNeeded;


@end


#endif