/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTIDocumentTraits, RTIDocumentState;

@interface RTIInputSystemClientSession : NSObject {

	RTIDocumentTraits* _documentTraits;
	RTIDocumentState* _documentState;

}

@property (nonatomic,retain) RTIDocumentTraits * documentTraits;              //@synthesize documentTraits=_documentTraits - In the implementation block
@property (nonatomic,retain) RTIDocumentState * documentState;                //@synthesize documentState=_documentState - In the implementation block
-(RTIDocumentState *)documentState;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(RTIDocumentTraits *)documentTraits;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
@end
