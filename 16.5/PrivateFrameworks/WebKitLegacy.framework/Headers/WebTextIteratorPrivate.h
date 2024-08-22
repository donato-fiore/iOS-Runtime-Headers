// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBTEXTITERATORPRIVATE_H
#define WEBTEXTITERATORPRIVATE_H


#import <Foundation/Foundation.h>


@interface WebTextIteratorPrivate : NSObject {
    unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> _textIterator;
    Vector<unsigned short, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _upconvertedText;
}




+(void)initialize;


@end


#endif