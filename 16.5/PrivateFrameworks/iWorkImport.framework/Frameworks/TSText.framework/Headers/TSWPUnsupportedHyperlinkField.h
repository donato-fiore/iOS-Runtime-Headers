// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPUNSUPPORTEDHYPERLINKFIELD_H
#define TSWPUNSUPPORTEDHYPERLINKFIELD_H

@class NSString;


#import "TSWPPlaceholderSmartField.h"

@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField {
    NSString *_href;
    NSString *_hrefOriginal;
}


@property (copy, nonatomic) NSString *href;
@property (copy, nonatomic) NSString *hrefOriginal;


+(Class)classForUnarchiver:(id)arg0 ;
-(BOOL)allowsPasteAsSmartField;
-(id)copyWithContext:(id)arg0 ;
-(id)initFromSmartField:(id)arg0 href:(id)arg1 hrefOriginal:(id)arg2 ;
-(unsigned short)smartFieldKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif