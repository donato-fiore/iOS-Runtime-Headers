// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTURECUSTOMCONTENTPROVIDER_H
#define SBUISYSTEMAPERTURECUSTOMCONTENTPROVIDER_H

@class UIColor, NSString, UIView;
@protocol SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureCustomContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling>



@property (retain, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *providedView; // ivar: _providedView
@property (readonly) Class superclass;


-(id)initWithView:(id)arg0 ;


@end


#endif