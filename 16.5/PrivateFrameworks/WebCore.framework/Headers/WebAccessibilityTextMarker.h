// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBACCESSIBILITYTEXTMARKER_H
#define WEBACCESSIBILITYTEXTMARKER_H


#import <Foundation/Foundation.h>


@interface WebAccessibilityTextMarker : NSObject {
    *void _cache;
    ? _textMarkerData;
}




+(id)startOrEndTextMarkerForRange:(*void)arg0 isStart:(BOOL)arg1 cache:(*void)arg2 ;
+(id)textMarkerWithCharacterOffset:(struct CharacterOffset *)arg0 cache:(*void)arg1 ;
+(id)textMarkerWithVisiblePosition:(*void)arg0 cache:(*void)arg1 ;
-(*void)accessibilityObject;
-(BOOL)isIgnored;
-(id)dataRepresentation;
-(id)description;
-(id)initWithData:(id)arg0 accessibilityObject:(id)arg1 ;
-(id)initWithData:(id)arg0 cache:(*void)arg1 ;
-(id)initWithTextMarker:(struct TextMarkerData *)arg0 cache:(*void)arg1 ;
-(struct CharacterOffset )characterOffset;
-(struct VisiblePosition )visiblePosition;


@end


#endif