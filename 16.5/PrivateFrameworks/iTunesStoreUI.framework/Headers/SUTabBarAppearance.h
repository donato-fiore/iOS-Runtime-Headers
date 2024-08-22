// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUTABBARAPPEARANCE_H
#define SUTABBARAPPEARANCE_H

@class NSMutableDictionary, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUTabBarAppearance : NSObject <NSCopying>

 {
    NSMutableDictionary *_titleTextAttributes;
}


@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIImage *dividerImage; // ivar: _dividerImage
@property (retain, nonatomic) UIImage *selectedDividerImage; // ivar: _selectedDividerImage
@property (retain, nonatomic) UIImage *selectionIndicatorImage; // ivar: _selectionIndicatorImage
@property (nonatomic) CGFloat tabBarButtonSpacing; // ivar: _tabBarButtonSpacing
@property (nonatomic) CGFloat tabBarButtonWidth; // ivar: _tabBarButtonWidth


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)titleTextAttributesForState:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateTitleTextAttributesUsingBlock:(id)arg0 ;
-(void)setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif