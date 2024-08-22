// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBARCHIVERESOURCEFROMNSATTRIBUTEDSTRING_H
#define WEBARCHIVERESOURCEFROMNSATTRIBUTEDSTRING_H


#import <Foundation/Foundation.h>


@interface WebArchiveResourceFromNSAttributedString : NSObject {
    RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> resource;
}




-(id)MIMEType;
-(id)URL;
-(id)initWithData:(id)arg0 URL:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 frameName:(id)arg4 ;


@end


#endif