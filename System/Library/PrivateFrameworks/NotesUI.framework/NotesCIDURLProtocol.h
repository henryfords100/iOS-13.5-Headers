/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface NotesCIDURLProtocol : NSURLProtocol
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerDataProvider:(id)arg1 forCIDURL:(id)arg2 ;
+(void)unregisterDataProviderForCIDURL:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
@end
