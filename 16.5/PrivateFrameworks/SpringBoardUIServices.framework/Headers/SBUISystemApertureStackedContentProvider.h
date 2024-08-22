// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTURESTACKEDCONTENTPROVIDER_H
#define SBUISYSTEMAPERTURESTACKEDCONTENTPROVIDER_H

@class NSString, UIView;
@protocol SBUISystemApertureContentViewProviding;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureStackedContentProvider : NSObject <SBUISystemApertureContentViewProviding>



@property (nonatomic) NSInteger contentAxis;
@property (nonatomic) NSInteger contentDistribution;
@property (nonatomic) CGFloat contentSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *providedView; // ivar: _providedView
@property (readonly) Class superclass;


-(id)initWithContentViewProviders:(id)arg0 ;


@end


#endif