// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYSCALEMAPPING_H
#define SBDISPLAYSCALEMAPPING_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SBDisplayScaleMapping : NSObject {
    CGFloat _nativePPI;
    NSUInteger _scaleMethod;
    NSDictionary *_displayScaleToLogicalScale;
}


@property (readonly, copy, nonatomic) NSString *displayHardwareIdentifier; // ivar: _displayHardwareIdentifier
@property (readonly, nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (readonly, nonatomic) NSUInteger supportedScales; // ivar: _supportedScales


+(id)withDisplay:(id)arg0 allowWirelessDisplays:(BOOL)arg1 useNativeSize:(BOOL)arg2 ;
-(CGFloat)logicalScaleForDisplayScale:(NSUInteger)arg0 ;
-(CGFloat)ppiForDisplayScale:(NSUInteger)arg0 ;
-(NSUInteger)_defaultScale;
-(id)createDefaultSettings;
-(id)description;
-(id)initWithDisplayHardwareIdentifier:(id)arg0 nativePPI:(CGFloat)arg1 referenceSize:(struct CGSize )arg2 scaleMethod:(NSUInteger)arg3 supportedScales:(NSUInteger)arg4 displayScaleToLogicalScale:(id)arg5 ;


@end


#endif