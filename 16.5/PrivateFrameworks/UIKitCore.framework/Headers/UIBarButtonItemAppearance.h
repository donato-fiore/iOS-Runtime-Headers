// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIBARBUTTONITEMAPPEARANCE_H
#define UIBARBUTTONITEMAPPEARANCE_H

@protocol NSCopying, NSSecureCoding, _UIBarButtonItemAppearanceChangeObserver, _UIBarButtonItemDataFallback;

#import <Foundation/Foundation.h>

#import "_UIBarButtonItemData.h"
#import "UIBarButtonItemStateAppearance.h"

@interface UIBarButtonItemAppearance : NSObject <NSCopying, NSSecureCoding>

 {
    UIBarButtonItemStateAppearance" _states;
}


@property (weak, nonatomic, setter=_setChangeObserver:) NSObject<_UIBarButtonItemAppearanceChangeObserver> *_changeObserver; // ivar: _changeObserver
@property (readonly, nonatomic) _UIBarButtonItemData *_data; // ivar: _data
@property (retain, nonatomic, setter=_setFallback:) NSObject<_UIBarButtonItemDataFallback> *_fallback;
@property (readonly, nonatomic) UIBarButtonItemStateAppearance *disabled;
@property (readonly, nonatomic) UIBarButtonItemStateAppearance *focused;
@property (readonly, nonatomic) UIBarButtonItemStateAppearance *highlighted;
@property (readonly, nonatomic) UIBarButtonItemStateAppearance *normal;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_proxyForState:(NSInteger)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBarButtonItemAppearance:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_describeInto:(id)arg0 ;
-(void)_resetBackIndicatorImages;
-(void)_setBackIndicatorImage:(id)arg0 transitionMaskImage:(id)arg1 ;
-(void)_setData:(id)arg0 ;
-(void)_updateDataTo:(id)arg0 signal:(BOOL)arg1 ;
-(void)_updateToSupportBackIndicatorsCopyingIndicatorsAndFallbackFrom:(id)arg0 ;
-(void)_writeToStorage:(id)arg0 ;
-(void)configureWithDefaultForStyle:(NSInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif