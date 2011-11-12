@interface NSArray (GFExtensions)
- (id)GFArrayEnumerator;
@end

@interface NSColor (QCHue)
+ (id)_colorWithHue:(float)hue;
@end

@interface NSDictionary (GFExtensions)
- (id)GFDictionaryEnumerator;
@end

@interface NSMutableDictionary (GFPrivateExtensions)
- (void)_mergeEntriesFromDictionary:(id)fp8 maxDepth:(unsigned int)fp12;
- (id)_stripDotEntries;
- (void)_setNullForKey:(id)aKey;
@end

@interface NSObject (GFExtensions)
- (void)__performUndo2:(id)fp8;
- (void)__performUndo3:(id)fp8;
- (void)__performUndo4:(id)fp8;
@end

@interface NSObject (GFSettingsViewDelegate)
- (id)settingsView:(id)fp8 settingForKey:(id)fp12;
- (void)settingsView:(id)fp8 setSetting:(id)fp12 forKey:(id)fp16;
- (void)settingsView:(id)fp8 clearSettingForKey:(id)fp12;
- (BOOL)settingsView:(id)fp8 shouldRenameKey:(id)fp12;
- (void)settingsView:(id)fp8 renameKey:(id)fp12 toKey:(id)fp16;
@end

@interface NSObject (QCCompositionParameterViewDelegate)
- (BOOL)compositionParameterView:(id)fp8 shouldDisplayParameterWithKey:(id)fp12 attributes:(id)fp16;
- (void)compositionParameterView:(id)fp8 didChangeParameterWithKey:(id)fp12;
@end

@interface NSObject (QCCompositionPickerViewDelegate)
- (void)compositionPickerView:(id)fp8 didLoadComposition:(id)fp12;
- (void)compositionPickerView:(id)fp8 willSelectComposition:(id)fp12;
- (void)compositionPickerView:(id)fp8 didSelectComposition:(id)fp12;
- (void)compositionPickerViewDidStartAnimating:(id)fp8;
- (void)compositionPickerViewWillStopAnimating:(id)fp8;
- (unsigned int)compositionPickerView:(id)fp8 draggingEnteredComposition:(id)fp12 sender:(id)fp16;
- (BOOL)compositionPickerView:(id)fp8 performDragOperationOnComposition:(id)fp12 sender:(id)fp16;
- (BOOL)compositionPickerView:(id)fp8 keyDown:(id)fp12;
@end

@interface NSObject (QCImage)
- (id)createOptimizedProviderWithTransformation:(id)fp8 cropping:(NSRect)fp12;
- (id)createImageWithOptions:(id)fp8;
@end

@interface NSObject (QCObjectMetadata)
- (id)resolveForwardingConflictWithPreviousMetadata:(id)fp8 forKey:(id)fp12;
@end

@interface NSObject (QCPlugInOutputImageProvider)
- (BOOL)shouldColorMatch;
- (id)supportedBufferPixelFormats;
- (BOOL)renderToBuffer:(void *)fp8 withBytesPerRow:(unsigned int)fp12 pixelFormat:(id)fp16 forBounds:(NSRect)fp20;
- (id)supportedRenderedTexturePixelFormats;
- (unsigned int)copyRenderedTextureForCGLContext:(CGLContextObj)context pixelFormat:(id)fp12 bounds:(NSRect)bounds isFlipped:(char *)fp32;
- (void)releaseRenderedTexture:(unsigned int)fp8 forCGLContext:(CGLContextObj)context;
- (BOOL)canRenderWithCGLContext:(CGLContextObj)context;
- (BOOL)renderWithCGLContext:(CGLContextObj)context forBounds:(NSRect)bounds;
@end

@interface NSOpenGLContext_QuartzComposer : NSOpenGLContext
- (void)_surfaceWillGoAway:(id)fp8;
- (void)_surfaceDidComeBack:(id)fp8;
@end

@interface NSSet (GFExtensions)
- (id)GFSetEnumerator;
@end

@interface NSString (QCTextRenderer)
- (void)drawInContext:(CGContextRef)context atPoint:(NSPoint)point withFontName:(id)fontName size:(float)size alignement:(int)align;
@end

@interface NSTextView (GFLogMessage)
- (void)_GFLogMessage:(id)fp8;
@end

@interface NSUndoManager (GFExtensions)
- (void)registerUndoWithTarget:(id)fp8 selector:(SEL)fp12 object1:(id)fp16 object2:(id)fp20;
- (void)registerUndoWithTarget:(id)fp8 selector:(SEL)fp12 object1:(id)fp16 object2:(id)fp20 object3:(id)fp24;
- (void)registerUndoWithTarget:(id)fp8 selector:(SEL)fp12 object1:(id)fp16 object2:(id)fp20 object3:(id)fp24 object4:(id)fp28;
@end
