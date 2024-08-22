// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIATAGSVIEWLAYOUT_H
#define VUIMEDIATAGSVIEWLAYOUT_H

@class UIColor, NSString, NSArray, NSShadow;

#import <Foundation/Foundation.h>

#import "VUITextBadgeLayout.h"
#import "VUITextLayout.h"

@interface VUIMediaTagsViewLayout : NSObject

@property (nonatomic) BOOL alignBadgeVertically; // ivar: _alignBadgeVertically
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) UIEdgeInsets badgeMargin; // ivar: _badgeMargin
@property (nonatomic) CGFloat badgeMaxHeight; // ivar: _badgeMaxHeight
@property (retain, nonatomic) UIColor *badgeTintColor; // ivar: _badgeTintColor
@property (nonatomic) BOOL centerAlign; // ivar: _centerAlign
@property (readonly, nonatomic) UIEdgeInsets commonSenseMargin; // ivar: _commonSenseMargin
@property (retain, nonatomic) NSString *compositingFilter; // ivar: _compositingFilter
@property (readonly, nonatomic, getter=isGroupActivityTagEnabled) BOOL groupActivityTagEnabled; // ivar: _groupActivityTagEnabled
@property (readonly, nonatomic) UIEdgeInsets groupMargin; // ivar: _groupMargin
@property (readonly, nonatomic) NSArray *groupedKeys; // ivar: _groupedKeys
@property (retain, nonatomic) VUITextBadgeLayout *liveTextBadgeLayout; // ivar: _liveTextBadgeLayout
@property (nonatomic) UIEdgeInsets margin; // ivar: _margin
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (readonly, nonatomic) BOOL orphanAvoidance; // ivar: _orphanAvoidance
@property (readonly, nonatomic) VUITextLayout *rentalExpirationTextLayout; // ivar: _rentalExpirationTextLayout
@property (retain, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (nonatomic) UIEdgeInsets textBadgeMargin; // ivar: _textBadgeMargin
@property (readonly, nonatomic) VUITextLayout *textLayout; // ivar: _textLayout
@property (retain, nonatomic) VUITextBadgeLayout *timeTextBadgeLayout; // ivar: _timeTextBadgeLayout
@property (readonly, nonatomic) UIEdgeInsets tomatoMeterMargin; // ivar: _tomatoMeterMargin
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic, getter=isWrappingAllowed) BOOL wrappingAllowed; // ivar: _wrappingAllowed


-(id)init;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif