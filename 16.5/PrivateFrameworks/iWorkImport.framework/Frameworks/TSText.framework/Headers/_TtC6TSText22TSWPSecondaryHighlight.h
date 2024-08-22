// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC6TSTEXT22TSWPSECONDARYHIGHLIGHT_H
#define _TTC6TSTEXT22TSWPSECONDARYHIGHLIGHT_H

@class NSArray;
@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC6TSText22TSWPSecondaryHighlight : NSObject <CALayerDelegate>

 {
    ? rangeSource;
    ? color;
    ? pathStyle;
    ? layers;
    ? selectionVisibility;
}


@property (nonatomic) NSInteger highlightOrdering; // ivar: highlightOrdering
@property (nonatomic, readonly) NSArray *layers;


-(BOOL)wantsCaretAndSelectionVisibleFor:(id)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(id)initWithRange:(struct _NSRange )arg0 color:(struct CGColor *)arg1 pathStyle:(NSUInteger)arg2 ;
-(id)initWithRanges:(id)arg0 color:(struct CGColor *)arg1 pathStyle:(NSUInteger)arg2 ;
-(id)initWithSmartField:(id)arg0 color:(struct CGColor *)arg1 pathStyle:(NSUInteger)arg2 ;
-(void)updateLayersForRep:(id)arg0 columns:(id)arg1 ;


@end


#endif