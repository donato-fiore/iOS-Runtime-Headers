// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTUREIMAGECONTENTPROVIDER_H
#define SBUISYSTEMAPERTUREIMAGECONTENTPROVIDER_H

@class UIColor, NSString, UIImage, UIView;
@protocol SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureImageContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling>



@property (retain, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIView *providedView; // ivar: _providedView
@property (readonly) Class superclass;


-(id)initWithImage:(id)arg0 ;
-(id)initWithSystemImageName:(id)arg0 ;


@end


#endif