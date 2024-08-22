// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLISTVIEWICONVISIBILITYINFO_H
#define SBICONLISTVIEWICONVISIBILITYINFO_H

@class NSMapTable, NSString;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBIconListViewIconVisibilityInfo : NSObject <BSDescriptionProviding, NSCopying>

 {
    NSMapTable *_visibleRects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isNormalized) BOOL normalized; // ivar: _normalized
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSMapTable *visibleIconRects;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )visibleRectForIcon:(id)arg0 ;
-(void)addValuesFromIconVisibilityInfo:(id)arg0 ;
-(void)enumerateVisibleIconsUsingBlock:(id)arg0 ;
-(void)setVisibleRect:(struct CGRect )arg0 forIcon:(id)arg1 ;


@end


#endif