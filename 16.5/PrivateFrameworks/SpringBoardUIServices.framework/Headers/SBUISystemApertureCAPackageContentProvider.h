// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTURECAPACKAGECONTENTPROVIDER_H
#define SBUISYSTEMAPERTURECAPACKAGECONTENTPROVIDER_H

@class NSString, UIView;
@protocol SBUISystemApertureContentViewProviding;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureCAPackageContentProvider : NSObject <SBUISystemApertureContentViewProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize intrinsicPackageSize;
@property (readonly, nonatomic) UIView *providedView; // ivar: _providedView
@property (readonly) Class superclass;


-(BOOL)setState:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithPackageName:(id)arg0 inBundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)publishedObjectWithName:(id)arg0 ;


@end


#endif