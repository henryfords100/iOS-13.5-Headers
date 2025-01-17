/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAnnotationManagerDelegate <NSObject>
@optional
-(void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;
-(BOOL)annotationManager:(id)arg1 shouldAnimateDeselectionOfAnnotation:(id)arg2 forSelectionOfAnnotation:(id)arg3;
-(BOOL)annotationManager:(id)arg1 canSelectAnnotationRepresentation:(id)arg2;

@required
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
-(void)annotationManager:(id)arg1 didRemoveAnnotationRepresentations:(id)arg2;
-(void)annotationManagerDidChangeVisibleAnnotationRepresentations:(id)arg1;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;

@end

