// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VOSCOMMANDRESOLVER_H
#define VOSCOMMANDRESOLVER_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VOSScreenreaderMode.h"

@interface VOSCommandResolver : NSObject <NSCopying>

 {
    NSNumber *_cachedPressCount;
    NSNumber *_cachedContext;
}


@property (nonatomic) NSUInteger bsiTypingMode; // ivar: _bsiTypingMode
@property (readonly, nonatomic) NSUInteger context;
@property (copy, nonatomic) id *fetchContextBlock; // ivar: _fetchContextBlock
@property (copy, nonatomic) id *fetchPressCountBlock; // ivar: _fetchPressCountBlock
@property (nonatomic) NSUInteger host; // ivar: _host
@property (readonly, nonatomic) BOOL isAppleTV;
@property (readonly, nonatomic) BOOL isBSIScreenreaderMode;
@property (readonly, nonatomic) BOOL isDefaultKeyboardMode;
@property (readonly, nonatomic) BOOL isDefaultScreenreaderMode;
@property (readonly, nonatomic) BOOL isHandwritingScreenreaderMode;
@property (readonly, nonatomic) BOOL isHomePod;
@property (readonly, nonatomic) BOOL isIPad;
@property (readonly, nonatomic) BOOL isIPhone;
@property (readonly, nonatomic) BOOL isQuickNavKeyboardMode;
@property (readonly, nonatomic) BOOL isWatch;
@property (nonatomic) NSUInteger keyboardMode; // ivar: _keyboardMode
@property (readonly, nonatomic) NSInteger pressCount;
@property (copy, nonatomic) id *resolvingEventOccurredBlock; // ivar: _resolvingEventOccurredBlock
@property (retain, nonatomic) VOSScreenreaderMode *screenreaderMode; // ivar: _screenreaderMode
@property (nonatomic) BOOL shouldApplyRTL; // ivar: _shouldApplyRTL


+(NSUInteger)currentHost;
+(id)resolverForCurrentHost;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)resolverWithScreenreaderModeVariant:(id)arg0 ;


@end


#endif