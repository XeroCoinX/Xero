package org.xerocore.qt;

import android.os.Bundle;
import android.system.ErrnoException;
import android.system.Os;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;

public class XeroQtActivity extends QtActivity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        final File xeroDir = new File(getFilesDir().getAbsolutePath() + "/.xero");
        if (!xeroDir.exists()) {
            xeroDir.mkdir();
        }

        super.onCreate(savedInstanceState);
    }
}
