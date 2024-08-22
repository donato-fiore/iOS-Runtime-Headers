// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAPDFTAGGERONECOLUMNTEXTOWNERCONTEXT_H
#define TSAPDFTAGGERONECOLUMNTEXTOWNERCONTEXT_H

@class TSWPColumn;


#import "TSAPdfTaggerTextColumnOwnerContext.h"

@interface TSAPdfTaggerOneColumnTextOwnerContext : TSAPdfTaggerTextColumnOwnerContext

@property (retain) TSWPColumn *textColumn; // ivar: _textColumn


-(id)initWithStateOfTagger:(id)arg0 textColumn:(id)arg1 limitSelection:(id)arg2 ;


@end


#endif