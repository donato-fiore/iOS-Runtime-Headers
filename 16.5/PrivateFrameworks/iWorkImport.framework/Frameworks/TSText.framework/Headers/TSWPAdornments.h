// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPADORNMENTS_H
#define TSWPADORNMENTS_H


#import <Foundation/Foundation.h>


@interface TSWPAdornments : NSObject {
    vector<unsigned long, std::allocator<unsigned long>> _charIndexes;
    vector<unsigned short, std::allocator<unsigned short>> _glyphs;
    vector<unsigned short, std::allocator<unsigned short>> _flippedGlyphs;
    vector<CGPoint, std::allocator<CGPoint>> _positions;
    vector<CGPoint, std::allocator<CGPoint>> _flippedPositions;
    vector<CGRect, std::allocator<CGRect>> _rects;
    vector<TSWPAttachmentPosition, std::allocator<TSWPAttachmentPosition>> _attachmentPositions;
}


@property (readonly, nonatomic) CGFloat advance; // ivar: _advance
@property (readonly, nonatomic) CGFloat ascent; // ivar: _ascent
@property (readonly, nonatomic) NSUInteger attachmentPositionCount;
@property (readonly, nonatomic) *? attachmentPositions;
@property (readonly, nonatomic) NSUInteger charIndexCount;
@property (readonly, nonatomic) *NSUInteger charIndexes;
@property (retain, nonatomic) *CGColor color; // ivar: _color
@property (readonly, nonatomic) CGFloat descent; // ivar: _descent
@property (retain, nonatomic) *__CTFont flippedFont; // ivar: _flippedFont
@property (readonly, nonatomic) NSUInteger flippedGlyphCount;
@property (readonly, nonatomic) *unsigned short flippedGlyphs;
@property (readonly, nonatomic) NSUInteger flippedPositionCount;
@property (readonly, nonatomic) *CGPoint flippedPositions;
@property (retain, nonatomic) *__CTFont font; // ivar: _font
@property (readonly, nonatomic) NSUInteger glyphCount;
@property (readonly, nonatomic) *unsigned short glyphs;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) int location; // ivar: _location
@property (readonly, nonatomic) NSUInteger positionCount;
@property (readonly, nonatomic) *CGPoint positions;
@property (readonly, nonatomic) NSUInteger rectCount;
@property (readonly, nonatomic) *CGRect rects;
@property (nonatomic) BOOL shouldRotate; // ivar: _shouldRotate
@property (nonatomic) CGPoint textPosition; // ivar: _textPosition
@property (readonly, nonatomic) int type; // ivar: _type
@property (nonatomic) CGFloat verticalAdjustment; // ivar: _verticalAdjustment


-(id)initWithType:(int)arg0 color:(struct CGColor *)arg1 font:(struct __CTFont *)arg2 flippedFont:(struct __CTFont *)arg3 ;
-(void)addAdornmentWithAttachmentPosition:(struct ? )arg0 ;
-(void)addAdornmentWithCharIndex:(NSUInteger)arg0 point:(struct CGPoint )arg1 glyph:(unsigned short)arg2 rect:(struct CGRect )arg3 ;
-(void)addAdornmentWithPoint:(struct CGPoint )arg0 glyph:(unsigned short)arg1 flipped:(BOOL)arg2 ;
-(void)incrementCharIndexes:(NSInteger)arg0 startingAt:(NSUInteger)arg1 ;
-(void)removeAdornmentAt:(NSUInteger)arg0 ;


@end


#endif