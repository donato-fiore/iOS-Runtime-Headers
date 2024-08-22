// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIATTRIBUTEDSTRINGINDEXBARENTRY_H
#define SKUIATTRIBUTEDSTRINGINDEXBARENTRY_H

@class NSAttributedString, NSDictionary;


#import "SKUIIndexBarEntry.h"

@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry {
    BOOL _hasValidSynthesizedAttributedString;
    NSAttributedString *_synthesizedAttributedString;
}


@property (readonly, copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (copy, nonatomic) NSDictionary *defaultTextAttributes; // ivar: _defaultTextAttributes


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_synthesizedAttributedString;
-(id)description;
-(id)entryAttributedString;
-(id)initWithAttributedString:(id)arg0 ;
-(struct CGSize )_calculatedContentSize;
-(void)_drawContentInRect:(struct CGRect )arg0 ;
-(void)_invalidateSynthesizedAttributedString;
-(void)_tintColorDidChange;


@end


#endif