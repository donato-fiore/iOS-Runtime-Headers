// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPHYPERLINKSELECTION_H
#define TSWPHYPERLINKSELECTION_H

@class TSKSelection;
@protocol TSWPHyperlinkHostRepProtocol;


#import "TSWPHyperlinkField.h"

@interface TSWPHyperlinkSelection : TSKSelection

@property (readonly, nonatomic) TSWPHyperlinkField *hyperlinkField; // ivar: _hyperlinkField
@property (readonly, nonatomic) NSObject<TSWPHyperlinkHostRepProtocol> *hyperlinkRep; // ivar: _hyperlinkRep
@property (nonatomic) BOOL openInEditMode; // ivar: _openInEditMode


+(Class)archivedSelectionClass;
+(id)selectionWithHyperlinkField:(id)arg0 rep:(id)arg1 ;
-(id)initWithHyperlinkField:(id)arg0 rep:(id)arg1 ;


@end


#endif